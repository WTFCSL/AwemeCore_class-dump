//
//     Generated by private class-dump
//

@protocol IESECLiveCardViewDelegate;

@interface IESECLiveCardGenerator : NSObject {
    id<IESECLiveCardViewDelegate> _delegate;
}

@property (weak, nonatomic) id<IESECLiveCardViewDelegate> delegate;

- (id)goodsCardViewWithModel:(id)arg0;
- (id)goodsCardViewWithParams:(id)arg0;
- (id)p_auctionCardViewWithCardModel:(id)arg0;
- (id)p_relatedCardViewWithCardModel:(id)arg0;
- (id)p_goodsCardViewWithCardModel:(id)arg0;
- (id)p_lynxCardViewWithParams:(id)arg0;
- (id)emptyCardView;
- (id)initWithLiveCardViewDelegate:(id)arg0;
- (id)goodsCardViewWithData:(id)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
