//
//     Generated by private class-dump
//

@class NSArray, NSString, NSMutableSet;

@interface HMDImageOpaqueLoader : NSObject {
    NSString *_directory;
    NSMutableSet *_mainFileSet;
    NSMutableSet *_loadCommandFileSet;
    NSMutableSet *_realTimeFileSet;
    unsigned long long _fileLoaded;
    BOOL _envAbnormal;
}

@property (nonatomic) BOOL envAbnormal;
@property (readonly, nonatomic) unsigned long long currentlyImageCount;
@property (readonly, nonatomic) NSArray *currentlyUsedImages;

- (void)loadMain;
- (void)loadExternal;
- (id)loadImageFile:(id)arg0 error:(id *)arg1;
- (void)setEnvAbnormal:(BOOL)arg0;
- (unsigned long long)currentlyImageCount;
- (id)imageForAddress:(unsigned long long)arg0;
- (BOOL)envAbnormal;
- (id)currentlyUsedImages;
- (id)initWithDirectory:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
