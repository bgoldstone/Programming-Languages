// Generated from Expression.g4 by ANTLR 4.7.2
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link ExpressionParser}.
 */
public interface ExpressionListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link ExpressionParser#assign}.
	 * @param ctx the parse tree
	 */
	void enterAssign(ExpressionParser.AssignContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExpressionParser#assign}.
	 * @param ctx the parse tree
	 */
	void exitAssign(ExpressionParser.AssignContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExpressionParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterExpr(ExpressionParser.ExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExpressionParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitExpr(ExpressionParser.ExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExpressionParser#term}.
	 * @param ctx the parse tree
	 */
	void enterTerm(ExpressionParser.TermContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExpressionParser#term}.
	 * @param ctx the parse tree
	 */
	void exitTerm(ExpressionParser.TermContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExpressionParser#factor}.
	 * @param ctx the parse tree
	 */
	void enterFactor(ExpressionParser.FactorContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExpressionParser#factor}.
	 * @param ctx the parse tree
	 */
	void exitFactor(ExpressionParser.FactorContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExpressionParser#exp}.
	 * @param ctx the parse tree
	 */
	void enterExp(ExpressionParser.ExpContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExpressionParser#exp}.
	 * @param ctx the parse tree
	 */
	void exitExp(ExpressionParser.ExpContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExpressionParser#id}.
	 * @param ctx the parse tree
	 */
	void enterId(ExpressionParser.IdContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExpressionParser#id}.
	 * @param ctx the parse tree
	 */
	void exitId(ExpressionParser.IdContext ctx);
}