//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEHomePageRemoteTrackModel : NSObject <AWEHomePageRemoteTrackContextProtocol> {
    NSString *authorID;
    NSString *enterFrom;
    NSString *enterMethod;
    NSString *groupID;
    long long duration;
    NSString *previousBusinessId;
    NSString *previousBusinessType;
    NSString *previousModuleType;
    NSArray *consumedBusinessIDs;
}

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *authorID;
@property (nonatomic) long long duration;
@property (copy, nonatomic) NSString *previousModuleType;
@property (copy, nonatomic) NSString *previousBusinessType;
@property (copy, nonatomic) NSString *previousBusinessId;
@property (copy, nonatomic) NSArray *consumedBusinessIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnterFrom:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (id)enterFrom;
- (id)previousModuleType;
- (void)setPreviousModuleType:(id)arg0;
- (id)previousBusinessType;
- (void)setPreviousBusinessType:(id)arg0;
- (id)previousBusinessId;
- (void)setPreviousBusinessId:(id)arg0;
- (id)consumedBusinessIDs;
- (void)setConsumedBusinessIDs:(id)arg0;
- (void)setGroupID:(id)arg0;
- (id)groupID;
- (void).cxx_destruct;
- (long long)duration;
- (void)setDuration:(long long)arg0;
- (id)authorID;
- (void)setAuthorID:(id)arg0;

@end
