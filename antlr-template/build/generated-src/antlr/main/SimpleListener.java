// Generated from Simple.g4 by ANTLR 4.7.2
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link SimpleParser}.
 */
public interface SimpleListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link SimpleParser#assign}.
	 * @param ctx the parse tree
	 */
	void enterAssign(SimpleParser.AssignContext ctx);
	/**
	 * Exit a parse tree produced by {@link SimpleParser#assign}.
	 * @param ctx the parse tree
	 */
	void exitAssign(SimpleParser.AssignContext ctx);
	/**
	 * Enter a parse tree produced by {@link SimpleParser#id}.
	 * @param ctx the parse tree
	 */
	void enterId(SimpleParser.IdContext ctx);
	/**
	 * Exit a parse tree produced by {@link SimpleParser#id}.
	 * @param ctx the parse tree
	 */
	void exitId(SimpleParser.IdContext ctx);
	/**
	 * Enter a parse tree produced by {@link SimpleParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterExpr(SimpleParser.ExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link SimpleParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitExpr(SimpleParser.ExprContext ctx);
}