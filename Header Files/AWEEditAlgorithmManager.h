//
//     Generated by private class-dump
//

@class VEAlgorithmSession;

@interface AWEEditAlgorithmManager : NSObject {
    BOOL _algorithmRunning;
    VEAlgorithmSession *_algorithmSession;
}

@property (retain, nonatomic) VEAlgorithmSession *algorithmSession;
@property BOOL algorithmRunning;

+ (id)sharedManager;

- (id)algorithmSession;
- (void)setAlgorithmSession:(id)arg0;
- (BOOL)useBachToRecommend;
- (unsigned long long)recommendStrategy;
- (BOOL)shouldUploadFramesForRecommendation;
- (void)runAlgorithmOfType:(long long)arg0 withImagePaths:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)shouldExtractFrames;
- (BOOL)algorithmRunning;
- (void)setAlgorithmRunning:(BOOL)arg0;
- (void)runAlgorithmOfType:(long long)arg0 imagePaths:(id)arg1 resultList:(id)arg2 currentIndex:(long long)arg3 completion:(id /* block */)arg4;
- (void)chekAndDownloadAlgorithmModelWithCompletion:(id /* block */)arg0;
- (id)generateResultWithList:(id)arg0;
- (unsigned long long)veAlgorithmTypeFromACCAlgorithmType:(long long)arg0;
- (void).cxx_destruct;
- (id)modelNames;

@end