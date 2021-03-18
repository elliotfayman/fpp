package fpp.compiler.analysis

import fpp.compiler.ast._
import fpp.compiler.util._

/** An FPP connection */
case class Connection(
  /** The location where the connection is defined */
  loc: Location,
  /** The from endpoint */
  from: Connection.Endpoint,
  /** The to endpoint */
  to: Connection.Endpoint
)

object Connection {

  /** Constructs a connection from an AST node */
  def fromNode(a: Analysis, node: AstNode[Ast.SpecConnectionGraph.Connection]):
    Result.Result[Connection] = {
      val data = node.data
      val loc = Locations.get(node.id)
      for {
        from <- Endpoint.fromAst(a, data.fromPort, data.fromIndex)
        to <- Endpoint.fromAst(a, data.toPort, data.toIndex)
      }
      yield Connection(loc, from, to)
  }

  /** The lexical ordering on connections */
  case class LexicalOrdering(a: Analysis) extends Ordering[Connection] {
    def compare(c1: Connection, c2: Connection) = {
      val eo = Endpoint.LexicalOrdering(a)
      if (eo.lt(c1.from, c2.from)) -1
      else if (eo.gt(c1.from, c2.from)) 1
      else eo.compare(c1.to, c2.to)
    }

  }

  /** A connection endpoint */
  case class Endpoint(
    /** The port instance identifier */
    portInstanceIdentifier: PortInstanceIdentifier,
    /** The port number */
    portNumber: Option[Int]
  )


  object Endpoint {

    /** Constructs a connection endpoint from AST info */
    def fromAst(
      a: Analysis,
      port: AstNode[Ast.PortInstanceIdentifier],
      portNumber: Option[AstNode[Ast.Expr]]
    ): Result.Result[Endpoint] = for {
      pid <- PortInstanceIdentifiers.fromNode(a, port)
      pn <- a.getIntValueOpt(portNumber)
    } yield Endpoint(pid, pn)

    /** The lexical ordering on endpoints */
    case class LexicalOrdering(a: Analysis) extends Ordering[Endpoint] {

      def compare(e1: Endpoint, e2: Endpoint) = {
        val name1 = PortInstanceIdentifiers.getQualifiedName(
          a,
          e1.portInstanceIdentifier
        ).toString
        val name2 = PortInstanceIdentifiers.getQualifiedName(
          a,
          e2.portInstanceIdentifier
        ).toString
        if (name1 < name2) -1
        else if (name1 > name2) 1
        else (e1.portNumber, e2.portNumber) match {
          case (Some (n1), Some (n2)) => n1 - n2
          case _ => 0
        }
      }

    }


  }

}
