//
//     Generated by private class-dump
//

@class NSString;

@interface CSJAdSDKTestToolManager : NSObject {
    NSString *_testTimeStamp;
    NSString *_hostIP;
    NSString *_hostPort;
}

@property (copy, nonatomic) NSString *testTimeStamp;
@property (copy, nonatomic) NSString *hostIP;
@property (copy, nonatomic) NSString *hostPort;

+ (BOOL)isUnionBundleId;
+ (void)setHostIP:(id)arg0;
+ (void)setTestLongitude:(id)arg0;
+ (void)setTestLatitude:(id)arg0;
+ (void)setInputOneContent:(id)arg0;
+ (void)setInputTwoContent:(id)arg0;
+ (void)clearIPAddress;
+ (void)clearInputContent;
+ (id)sharedInstance;
+ (BOOL)isDemoEnvironment;
+ (void)setHostPort:(id)arg0;

- (id)testTimeStamp;
- (id)hostIP;
- (void)initializeCurrentTime;
- (void)setHostIP:(id)arg0;
- (void)setTestTimeStamp:(id)arg0;
- (id)init;
- (BOOL)isMemberOfClass:(Class)arg0;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:(Class)arg0;
- (id)hostPort;
- (void)setHostPort:(id)arg0;

@end