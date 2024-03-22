//
//     Generated by private class-dump
//

@class UIFont, NSString, UIColor, IESECTracker, NSDictionary;

@interface IESECShopRecommendTitleObject : NSObject <IGListDiffable> {
    BOOL _showPattern;
    NSString *_recommendText;
    UIFont *_font;
    UIColor *_textColor;
    double _yOffset;
    IESECTracker *_tracker;
    NSString *_showTrack;
    NSDictionary *_showParams;
}

@property (copy, nonatomic) NSString *recommendText;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic, getter=isShowPattern) BOOL showPattern;
@property (nonatomic) double yOffset;
@property (retain, nonatomic) IESECTracker *tracker;
@property (copy, nonatomic) NSString *showTrack;
@property (copy, nonatomic) NSDictionary *showParams;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)arg0;
- (id)showTrack;
- (id)recommendText;
- (void)setRecommendText:(id)arg0;
- (id)showParams;
- (void)setShowParams:(id)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeForObject;
- (void)setShowPattern:(BOOL)arg0;
- (BOOL)isShowPattern;
- (void)setShowTrack:(id)arg0;
- (id)tracker;
- (void)setTracker:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (double)yOffset;
- (id)font;
- (void)setFont:(id)arg0;
- (void)setTextColor:(id)arg0;
- (id)textColor;
- (void)setYOffset:(double)arg0;

@end
