//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface SAMICore_ResourceParameter : NSObject {
    int _sampleRate;
    int _maxBlockSize;
    int _numChannel;
    NSString *_input;
    NSArray *_resourcePaths;
}

@property (nonatomic) int sampleRate;
@property (nonatomic) int maxBlockSize;
@property (nonatomic) int numChannel;
@property (retain, nonatomic) NSString *input;
@property (retain, nonatomic) NSArray *resourcePaths;

- (void)setMaxBlockSize:(int)arg0;
- (int)maxBlockSize;
- (int)numChannel;
- (void)setNumChannel:(int)arg0;
- (id)resourcePaths;
- (void)setResourcePaths:(id)arg0;
- (id)input;
- (int)sampleRate;
- (void)setInput:(id)arg0;
- (void)setSampleRate:(int)arg0;

@end
