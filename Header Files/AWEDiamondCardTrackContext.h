//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDiamondCardTrackContext : NSObject {
    NSString *_cardElementID;
    double _elementCreatedCount;
    double _viewCreatedCount;
    double _cardLayoutCount;
    double _cardUpdateLayoutCount;
    double _cardElementRenderTs;
}

@property (copy, nonatomic) NSString *cardElementID;
@property (nonatomic) double elementCreatedCount;
@property (nonatomic) double viewCreatedCount;
@property (nonatomic) double cardLayoutCount;
@property (nonatomic) double cardUpdateLayoutCount;
@property (nonatomic) double cardElementRenderTs;

- (void)setViewCreatedCount:(double)arg0;
- (id)cardElementID;
- (double)elementCreatedCount;
- (double)viewCreatedCount;
- (double)cardLayoutCount;
- (void)setCardLayoutCount:(double)arg0;
- (void)setCardElementID:(id)arg0;
- (void)setElementCreatedCount:(double)arg0;
- (double)cardUpdateLayoutCount;
- (void)setCardUpdateLayoutCount:(double)arg0;
- (double)cardElementRenderTs;
- (void)setCardElementRenderTs:(double)arg0;
- (void).cxx_destruct;

@end
