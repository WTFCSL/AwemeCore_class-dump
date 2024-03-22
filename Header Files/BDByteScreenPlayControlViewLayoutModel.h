//
//     Generated by private class-dump
//

@interface BDByteScreenPlayControlViewLayoutModel : NSObject {
    BOOL _shouldHideRefreshBtn;
    double _mainTitleLabelOffsetTopOffset;
    double _actionButtonContainerTopOffset;
    unsigned long long _controlViewType;
    double _changeDeviceImageLeftOffset;
    double _changeDeviceImageWidth;
    double _changeDeviceImageHeight;
    struct CGSize { double width; double height; } _refreshBtnSize;
    struct CGPoint { double x; double y; } _containerAreaCenterPosition;
}

@property (nonatomic) double mainTitleLabelOffsetTopOffset;
@property (nonatomic) double actionButtonContainerTopOffset;
@property (nonatomic) struct CGSize { double width; double height; } refreshBtnSize;
@property (nonatomic) BOOL shouldHideRefreshBtn;
@property (nonatomic) unsigned long long controlViewType;
@property (nonatomic) double changeDeviceImageLeftOffset;
@property (nonatomic) double changeDeviceImageWidth;
@property (nonatomic) double changeDeviceImageHeight;
@property (nonatomic) struct CGPoint { double x; double y; } containerAreaCenterPosition;

- (void)setControlViewType:(unsigned long long)arg0;
- (void)setShouldHideRefreshBtn:(BOOL)arg0;
- (unsigned long long)controlViewType;
- (struct CGSize { double x0; double x1; })refreshBtnSize;
- (double)mainTitleLabelOffsetTopOffset;
- (double)changeDeviceImageLeftOffset;
- (double)changeDeviceImageWidth;
- (double)changeDeviceImageHeight;
- (double)actionButtonContainerTopOffset;
- (BOOL)shouldHideRefreshBtn;
- (void)setMainTitleLabelOffsetTopOffset:(double)arg0;
- (void)setActionButtonContainerTopOffset:(double)arg0;
- (void)setRefreshBtnSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setChangeDeviceImageLeftOffset:(double)arg0;
- (void)setChangeDeviceImageWidth:(double)arg0;
- (void)setChangeDeviceImageHeight:(double)arg0;
- (struct CGPoint { double x0; double x1; })containerAreaCenterPosition;
- (void)setContainerAreaCenterPosition:(struct CGPoint { double x0; double x1; })arg0;
- (id)init;

@end