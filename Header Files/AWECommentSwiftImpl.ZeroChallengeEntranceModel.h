//
//     Generated by private class-dump
//

@class NSString;

@interface AWECommentSwiftImpl.ZeroChallengeEntranceModel : AWEBaseApiModel {
    void /* unknown type, empty encoding */ entranceText;
    void /* unknown type, empty encoding */ challengeID;
    void /* unknown type, empty encoding */ challengeName;
}

@property (nonatomic, copy) NSString *entranceText;
@property (nonatomic, copy) NSString *challengeID;
@property (nonatomic, copy) NSString *challengeName;

+ (id)JSONKeyPathsByPropertyKey;

- (id)entranceText;
- (void)setEntranceText:(id)arg0;
- (id)challengeName;
- (void)setChallengeName:(id)arg0;
- (id)init;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg0;
- (id)challengeID;
- (void)setChallengeID:(id)arg0;

@end
