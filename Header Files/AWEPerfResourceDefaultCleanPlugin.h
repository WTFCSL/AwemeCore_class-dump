//
//     Generated by private class-dump
//

@class NSString, AWEPerfResourceCleanConfiguration, NSDate, NSMutableArray;

@interface AWEPerfResourceDefaultCleanPlugin : NSObject <HMDDiskVisitor, AWEPerfResourceCleanStrategy> {
    NSString *_rootPath;
    AWEPerfResourceCleanConfiguration *_cleanConfig;
    long long _bundleSize;
    NSMutableArray *_cleanItems;
    NSDate *_accessDate;
}

@property (copy, nonatomic) NSString *rootPath;
@property (retain, nonatomic) AWEPerfResourceCleanConfiguration *cleanConfig;
@property (nonatomic) long long bundleSize;
@property (retain, nonatomic) NSMutableArray *cleanItems;
@property (retain, nonatomic) NSDate *accessDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)visitFile:(id)arg0 size:(unsigned long long)arg1 lastAccessDate:(id)arg2 deepLevel:(long long)arg3;
- (void)visitDirectory:(id)arg0 size:(unsigned long long)arg1 fileCount:(unsigned long long)arg2 lastAccessDate:(id)arg3;
- (void)visitDirectory:(id)arg0 size:(unsigned long long)arg1 deepLevel:(unsigned long long)arg2;
- (id)cleanPaths;
- (void)cleanResourceWithStrategy:(unsigned long long)arg0;
- (double)cleanSizeWithStrategy:(unsigned long long)arg0;
- (void)setCleanItems:(id)arg0;
- (id)cleanItems;
- (id)cleanConfig;
- (void)expireClean;
- (BOOL)expired:(id)arg0;
- (id)initWithRootPath:(id)arg0 cleanConfig:(id)arg1;
- (void)lruClean;
- (void)FIFOClean;
- (void)setCleanConfig:(id)arg0;
- (long long)bundleSize;
- (void)setBundleSize:(long long)arg0;
- (void).cxx_destruct;
- (id)rootPath;
- (id)accessDate;
- (void)setAccessDate:(id)arg0;
- (void)setRootPath:(id)arg0;

@end
