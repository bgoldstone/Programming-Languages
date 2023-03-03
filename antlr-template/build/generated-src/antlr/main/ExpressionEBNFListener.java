// Generated from ExpressionEBNF.g4 by ANTLR 4.7.2
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link ExpressionEBNFParser}.
 */
public interface ExpressionEBNFListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link ExpressionEBNFParser#expr}.
	 * @param ctx the parse tree
	 */
	void enterExpr(ExpressionEBNFParser.ExprContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExpressionEBNFParser#expr}.
	 * @param ctx the parse tree
	 */
	void exitExpr(ExpressionEBNFParser.ExprContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExpressionEBNFParser#term}.
	 * @param ctx the parse tree
	 */
	void enterTerm(ExpressionEBNFParser.TermContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExpressionEBNFParser#term}.
	 * @param ctx the parse tree
	 */
	void exitTerm(ExpressionEBNFParser.TermContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExpressionEBNFParser#factor}.
	 * @param ctx the parse tree
	 */
	void enterFactor(ExpressionEBNFParser.FactorContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExpressionEBNFParser#factor}.
	 * @param ctx the parse tree
	 */
	void exitFactor(ExpressionEBNFParser.FactorContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExpressionEBNFParser#exp}.
	 * @param ctx the parse tree
	 */
	void enterExp(ExpressionEBNFParser.ExpContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExpressionEBNFParser#exp}.
	 * @param ctx the parse tree
	 */
	void exitExp(ExpressionEBNFParser.ExpContext ctx);
	/**
	 * Enter a parse tree produced by {@link ExpressionEBNFParser#id}.
	 * @param ctx the parse tree
	 */
	void enterId(ExpressionEBNFParser.IdContext ctx);
	/**
	 * Exit a parse tree produced by {@link ExpressionEBNFParser#id}.
	 * @param ctx the parse tree
	 */
	void exitId(ExpressionEBNFParser.IdContext ctx);
}