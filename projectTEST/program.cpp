#include <iostream>
#include "ast.h"
using namespace std; 


extern int yyerror(const char* s);
extern int yylex();
extern int yydebug;
extern int yyparse();
extern bool flage; 
extern Symbol_table* sym_tab; 
extern Class_decl* root;



int main()
{
	flage = false;
	yydebug = 0;
	yyparse();
	if (flage == false) cout << "parsing done !!!" << endl;
	root;

	Visitor* Printvisitor = new PrintVisitor();
	Visitor* typevisitor = new	TypeVisitor();
	root->accept(Printvisitor);
	sym_tab;
	//root->accept(typevisitor);
	//for (int i = 0; i < sym_tab->scopes->size(); i++) {
	//	for (int j = 0; j < sym_tab->scopes->at(i)->hashtab->size(); j++)
	//	{
	//		cout << sym_tab->scopes->at(i)->hashtab->end()->at(j)<< endl;
	//	}
	//}
		return 0;

}
