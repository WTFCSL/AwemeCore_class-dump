//
//     Generated by private class-dump
//

@class NSString, UIView;

@interface AWEAwemeImmersiveHintImmersiveDetailController : AWEAwemeNewDetailBaseController <AWEAwemeNewDetailTableControllerProtocol, AWEAwemeImmersiveHintImmersiveDetailControllerProtocol> {
    BOOL _immersiveShowing;
    BOOL _isNeedRecordUserDragImmersiveDetail;
    UIView *_hintContainer;
    double _lastContentOffsetY;
}

@property (retain, nonatomic) UIView *hintContainer;
@property (nonatomic) BOOL isNeedRecordUserDragImmersiveDetail;
@property (nonatomic) double lastContentOffsetY;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL immersiveShowing;

- (double)lastContentOffsetY;
- (void)setLastContentOffsetY:(double)arg0;
- (void)initialFetchCompletion:(id)arg0 error:(id)arg1;
- (void)onScrollViewWillBeginDragging:(double)arg0;
- (void)configCell:(id)arg0 atIndexPath:(id)arg1 tableView:(id)arg2;
- (void)onScrollDidEndWithIndexPath:(id)arg0;
- (void)immersiveAutoShowIfNeed;
- (void)immersiveAutoHide;
- (void)immersiveHintCancel;
- (BOOL)immersiveShowing;
- (BOOL)isNeedRecordUserDragImmersiveDetail;
- (void)setIsNeedRecordUserDragImmersiveDetail:(BOOL)arg0;
- (void)changeCellWithImmersiveStyle:(BOOL)arg0 visibleCells:(id)arg1;
- (void)immersiveUserDrag;
- (void)setImmersiveShowing:(BOOL)arg0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg0;
- (id)hintContainer;
- (void)setHintContainer:(id)arg0;

@end
