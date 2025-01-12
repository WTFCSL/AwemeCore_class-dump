//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface AWEBottomContainerTrackManager : NSObject {
    NSMutableArray *_currentShowElements;
    NSMutableArray *_currentShowElementsVisiableType;
    NSMutableArray *_shouldShowElements;
    NSMutableArray *_shouldShowElementsVisiableType;
}

@property (retain, nonatomic) NSMutableArray *currentShowElements;
@property (retain, nonatomic) NSMutableArray *currentShowElementsVisiableType;
@property (retain, nonatomic) NSMutableArray *shouldShowElements;
@property (retain, nonatomic) NSMutableArray *shouldShowElementsVisiableType;

- (void)addTrackElement:(id)arg0 appear:(BOOL)arg1 clearAppearCache:(BOOL)arg2;
- (id)currentShowElements;
- (id)currentShowElementsVisiableType;
- (id)shouldShowElements;
- (id)shouldShowElementsVisiableType;
- (void)addTrackElement:(id)arg0 appear:(BOOL)arg1;
- (void)trackElementWithModel:(id)arg0 referString:(id)arg1;
- (void)setCurrentShowElements:(id)arg0;
- (void)setCurrentShowElementsVisiableType:(id)arg0;
- (void)setShouldShowElements:(id)arg0;
- (void)setShouldShowElementsVisiableType:(id)arg0;
- (void).cxx_destruct;
- (void)resetData;

@end
