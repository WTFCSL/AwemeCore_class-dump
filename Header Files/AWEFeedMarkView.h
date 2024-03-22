//
//     Generated by private class-dump
//

@class CAShapeLayer;

@interface AWEFeedMarkView : AWEMarkView {
    BOOL _isVideoLayoutAdjust;
    BOOL _useLayoutAlignLeft;
    CAShapeLayer *_cornerLayer;
}

@property (retain, nonatomic) CAShapeLayer *cornerLayer;
@property (nonatomic) BOOL isVideoLayoutAdjust;
@property (nonatomic) BOOL useLayoutAlignLeft;

- (id)initWithUIConfigModel:(id)arg0;
- (void)setAdTagText:(id)arg0;
- (void)setMarkImageURLs:(id)arg0;
- (BOOL)isVideoLayoutAdjust;
- (id)cornerLayer;
- (void)setCornerLayer:(id)arg0;
- (void)setIsVideoLayoutAdjust:(BOOL)arg0;
- (void)updateLayoutHasAdTag:(BOOL)arg0;
- (void)setUseLayoutAlignLeft:(BOOL)arg0;
- (void)adjustUIStyleWithConfigModel:(id)arg0 HasAdTag:(BOOL)arg1;
- (BOOL)useLayoutAlignLeft;
- (void)clearTopCornerRadiusIfNeeded;
- (void)adjustUIStyleWithConfigModel:(id)arg0 HasAdTag:(BOOL)arg1 UseLayoutAlignLeft:(BOOL)arg2;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end