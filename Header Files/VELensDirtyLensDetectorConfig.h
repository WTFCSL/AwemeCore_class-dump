//
//     Generated by private class-dump
//

@class NSString;

@interface VELensDirtyLensDetectorConfig : NSObject {
    NSString *_modelName;
    NSString *_modelPath;
    id /* block */ _resultBlock;
}

@property (copy, nonatomic) NSString *modelName;
@property (copy, nonatomic) NSString *modelPath;
@property (copy, nonatomic) id /* block */ resultBlock;

- (void).cxx_destruct;
- (void)setResultBlock:(id /* block */)arg0;
- (void)setModelPath:(id)arg0;
- (void)setModelName:(id)arg0;
- (id)modelName;
- (id /* block */)resultBlock;
- (id)modelPath;

@end
