//
//     Generated by private class-dump
//

@class NSString, IESECURLModel;

@protocol IESECRelationGoodsSourceComponentProtocol <NSObject>

@property (readonly, nonatomic) BOOL showGoodsJumpArea;
@property (readonly, nonatomic) BOOL showSelfSellArea;
@property (readonly, nonatomic) IESECURLModel *goodsJumpIcon;
@property (readonly, copy, nonatomic) NSString *goodsJumpText;
@property (readonly, copy, nonatomic) NSString *goodsJumpUrl;
@property (readonly, nonatomic) BOOL showIconBorder;
@property (readonly, nonatomic) BOOL isSolidLine;

- (BOOL)showGoodsJumpArea;
- (id)goodsJumpText;
- (void)clickGoodsSource;
- (BOOL)showSelfSellArea;
- (id)goodsJumpIcon;
- (id)goodsJumpUrl;
- (BOOL)showIconBorder;
- (BOOL)isSolidLine;

@end
