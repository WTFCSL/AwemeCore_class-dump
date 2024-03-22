//
//     Generated by private class-dump
//

@class NSString, NSArray, HTSLiveCleanStrategy, NSNumber;

@interface HTSLiveGiftSyncModel : IESLiveDynamicModel {
    HTSLiveCleanStrategy *_cleanStrategy;
}

@property (retain, nonatomic) NSNumber *resourceID;
@property (copy, nonatomic) NSString *resourceURI;
@property (copy, nonatomic) NSArray *urls;
@property (copy, nonatomic) NSString *md5;
@property (copy, nonatomic) NSString *resourcePath;
@property (copy, nonatomic) NSString *localMD5;
@property (retain, nonatomic) NSNumber *localFileSize;
@property (nonatomic) int resourceType;
@property (nonatomic) unsigned long long downloaderUsed;
@property (retain, nonatomic) HTSLiveCleanStrategy *cleanStrategy;

- (id)cleanStrategy;
- (void)setCleanStrategy:(id)arg0;
- (void).cxx_destruct;

@end
