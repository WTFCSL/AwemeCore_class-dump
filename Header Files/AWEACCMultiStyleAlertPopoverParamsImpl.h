//
//     Generated by private class-dump
//

@class NSArray, NSString, UIView;

@interface AWEACCMultiStyleAlertPopoverParamsImpl : AWEACCMultiStyleAlertTemplateParamsImpl <ACCMultiStyleAlertPopoverParamsProtocol> {
    long long _alignmentMode;
    unsigned long long _arrowDirection;
    UIView *_sourceViewm;
    double _fixedOffsetY;
    double _fixedContentWidth;
    double _fixedContentHeight;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _sourceRect;
}

@property (retain, nonatomic) UIView *sourceView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;
@property (nonatomic) unsigned long long arrowDirection;
@property (nonatomic) double fixedContentWidth;
@property (nonatomic) double fixedContentHeight;
@property (nonatomic) double fixedOffsetY;
@property (nonatomic) long long alignmentMode;
@property (nonatomic, getter=isReconfigBeforeShow) BOOL reconfigBeforeShow;
@property (readonly, nonatomic) NSArray *actions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)fixedContentWidth;
- (double)fixedContentHeight;
- (double)fixedOffsetY;
- (void)setFixedContentWidth:(double)arg0;
- (void)setFixedContentHeight:(double)arg0;
- (void)setFixedOffsetY:(double)arg0;
- (void)setSourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sourceRect;
- (void)setSourceView:(id)arg0;
- (unsigned long long)arrowDirection;
- (id)sourceView;
- (void).cxx_destruct;
- (void)setArrowDirection:(unsigned long long)arg0;
- (long long)alignmentMode;
- (void)setAlignmentMode:(long long)arg0;
- (id)createAction;

@end
