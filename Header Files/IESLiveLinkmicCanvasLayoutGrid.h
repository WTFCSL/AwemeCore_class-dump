//
//     Generated by private class-dump
//

@class NSString, IESLiveLinkmicGridLayoutManager;

@interface IESLiveLinkmicCanvasLayoutGrid : NSObject <IESLiveLinkmicCanvasLayoutProvider> {
    BOOL _mainSlotEnable;
    double _topRatio;
    long long _horizontalInset;
    long long _verticalInset;
    long long _separatorWidth;
    long long _maxRowCount;
    long long _maxColumnCount;
    IESLiveLinkmicGridLayoutManager *_manager;
    struct CGPoint { double x; double y; } _mainOrigin;
    struct CGPoint { double x; double y; } _slotOrigin;
    struct CGSize { double width; double height; } _mainSlotRelativeSize;
    struct CGSize { double width; double height; } _slotRelativeSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _containerRect;
}

@property (retain, nonatomic) IESLiveLinkmicGridLayoutManager *manager;
@property (nonatomic) double topRatio;
@property (nonatomic) long long horizontalInset;
@property (nonatomic) long long verticalInset;
@property (nonatomic) long long separatorWidth;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerRect;
@property (nonatomic, getter=isMainSlotEnable) BOOL mainSlotEnable;
@property (nonatomic) struct CGPoint { double x; double y; } mainOrigin;
@property (nonatomic) struct CGPoint { double x; double y; } slotOrigin;
@property (nonatomic) struct CGSize { double width; double height; } mainSlotRelativeSize;
@property (nonatomic) struct CGSize { double width; double height; } slotRelativeSize;
@property (nonatomic) long long maxRowCount;
@property (nonatomic) long long maxColumnCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)buildLayout;
- (void)setSeparatorWidth:(long long)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerRect;
- (void)setContainerRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setMainSlotEnable:(BOOL)arg0;
- (void)setSlotRelativeSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setMaxRowCount:(long long)arg0;
- (void)setTopRatio:(double)arg0;
- (void)setMainSlotRelativeSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setSlotOrigin:(struct CGPoint { double x0; double x1; })arg0;
- (double)topRatio;
- (id)separatorLayoutFrames;
- (id)sessionLayoutFrames;
- (id)sessionLayoutInset;
- (BOOL)isMainSlotWithIndex:(long long)arg0;
- (id)streamLayoutProvider;
- (BOOL)isMainSlotEnable;
- (struct CGPoint { double x0; double x1; })mainOrigin;
- (void)setMainOrigin:(struct CGPoint { double x0; double x1; })arg0;
- (struct CGPoint { double x0; double x1; })slotOrigin;
- (struct CGSize { double x0; double x1; })mainSlotRelativeSize;
- (struct CGSize { double x0; double x1; })slotRelativeSize;
- (long long)maxColumnCount;
- (void).cxx_destruct;
- (void)setManager:(id)arg0;
- (id)manager;
- (long long)separatorWidth;
- (long long)maxRowCount;
- (void)setHorizontalInset:(long long)arg0;
- (long long)horizontalInset;
- (long long)verticalInset;
- (void)setVerticalInset:(long long)arg0;
- (void)setMaxColumnCount:(long long)arg0;

@end
