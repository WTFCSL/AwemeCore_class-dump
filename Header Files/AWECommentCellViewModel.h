//
//     Generated by private class-dump
//

@interface AWECommentCellViewModel : NSObject <AWECommentNewFeedCellViewModelProtocol, AWERLComponentTreeDelegate> {
    void /* unknown type, empty encoding */ commentModel;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ msgSender;
    void /* unknown type, empty encoding */ component;
    void /* unknown type, empty encoding */ tree;
    void /* unknown type, empty encoding */ needReCalculate;
    void /* unknown type, empty encoding */ bgHighLightAnimateDuration;
    void /* unknown type, empty encoding */ reLayoutAction;
    void /* unknown type, empty encoding */ forceRefresh;
    void /* unknown type, empty encoding */ reloadAction;
    void /* unknown type, empty encoding */ initialSize;
    void /* unknown type, empty encoding */ preCheckForceRefresh;
    void /* unknown type, empty encoding */ flattenedComponentsArray;
}

- (void)preCalculate;
- (void)renderOn:(id)arg0;
- (struct CGSize { double x0; double x1; })cellSize;
- (void)componentTree:(id)arg0 changeBoundsToSize:(struct CGSize { double x0; double x1; })arg1;
- (void)onAWEUIThemeChange;
- (void)addDebugView;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
