//
//     Generated by private class-dump
//

@class NSString, NSDictionary;
@protocol LSIMBottomFloatingCardViewDelegate;

@interface LSIMBottomFloatingCardView : UIView {
    long long _cardType;
    NSString *_cardTypeString;
    NSString *_itemID;
    id<LSIMBottomFloatingCardViewDelegate> _delegate;
    NSDictionary *_cardDict;
}

@property (readonly, nonatomic) long long cardType;
@property (readonly, copy, nonatomic) NSString *cardTypeString;
@property (readonly, copy, nonatomic) NSString *itemID;
@property (weak, nonatomic) id<LSIMBottomFloatingCardViewDelegate> delegate;
@property (readonly, copy, nonatomic) NSDictionary *cardDict;

- (id)cardDict;
- (id)initWithType:(long long)arg0 cardDict:(id)arg1;
- (id)cardTypeString;
- (void).cxx_destruct;
- (id)itemID;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (long long)cardType;

@end