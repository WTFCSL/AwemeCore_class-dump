//
//     Generated by private class-dump
//

@class NSString;

@interface IESProcessConfig : NSObject {
    BOOL _isSync;
    NSString *_modelPath;
}

@property (nonatomic) BOOL isSync;
@property (copy, nonatomic) NSString *modelPath;

- (void)setIsSync:(BOOL)arg0;
- (id)initWithModel:(id)arg0 withSync:(BOOL)arg1;
- (BOOL)isSync;
- (void).cxx_destruct;
- (void)setModelPath:(id)arg0;
- (id)modelPath;

@end