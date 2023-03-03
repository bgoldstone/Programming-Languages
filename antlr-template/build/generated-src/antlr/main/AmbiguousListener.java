// Generated from Ambiguous.g4 by ANTLR 4.7.2
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link AmbiguousParser}.
 */
public interface AmbiguousListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link AmbiguousParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterExpr(AmbiguousParser.ExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link AmbiguousParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitExpr(AmbiguousParser.ExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link AmbiguousParser#id}.
	 * @param ctx the parse tree
	 */
	void enterId(AmbiguousParser.IdContext ctx);
	/**
	 * Exit a parse tree produced by {@link AmbiguousParser#id}.
	 * @param ctx the parse tree
	 */
	void exitId(AmbiguousParser.IdContext ctx);
}