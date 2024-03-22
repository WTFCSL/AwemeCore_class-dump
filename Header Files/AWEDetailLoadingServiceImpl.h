//
//     Generated by private class-dump
//

@class NSMutableArray, AWEUILoadingView;

@interface AWEDetailLoadingServiceImpl : NSObject <AWEDetailLoadingService> {
    NSMutableArray *_loadingContainerArray;
    AWEUILoadingView *_loadingView;
}

@property (retain, nonatomic) NSMutableArray *loadingContainerArray;
@property (retain, nonatomic) AWEUILoadingView *loadingView;

- (void)enqueueLoadingInContainerView:(id)arg0;
- (void)removeLoadingInContainerView:(id)arg0;
- (id)loadingContainerArray;
- (void)p_updateLoadingStatus;
- (void)setLoadingContainerArray:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@end