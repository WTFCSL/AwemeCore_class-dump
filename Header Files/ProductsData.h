//
//     Generated by private class-dump
//

@class ProductsData_ExplainCard, ProductsData_ToolBar;

@interface ProductsData : IESLivePBBaseMessage

@property (retain, nonatomic) ProductsData_ToolBar *toolBar;
@property (nonatomic) BOOL hasToolBar;
@property (retain, nonatomic) ProductsData_ExplainCard *explainCard;
@property (nonatomic) BOOL hasExplainCard;
@property (retain, nonatomic) ProductsData_ToolBar *productListToolBar;
@property (nonatomic) BOOL hasProductListToolBar;
@property (nonatomic) int bringProductSwitchStatus;
@property (nonatomic) int paidLiveBringingProductFlag;

+ (id)descriptor;

@end