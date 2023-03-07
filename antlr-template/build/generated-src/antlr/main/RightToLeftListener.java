// Generated from RightToLeft.g4 by ANTLR 4.7.2
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link RightToLeftParser}.
 */
public interface RightToLeftListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link RightToLeftParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterExpr(RightToLeftParser.ExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link RightToLeftParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitExpr(RightToLeftParser.ExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link RightToLeftParser#id}.
	 * @param ctx the parse tree
	 */
	void enterId(RightToLeftParser.IdContext ctx);
	/**
	 * Exit a parse tree produced by {@link RightToLeftParser#id}.
	 * @param ctx the parse tree
	 */
	void exitId(RightToLeftParser.IdContext ctx);
}