//
//     Generated by private class-dump
//

@class NSString, NSNumber, NSArray;

@interface AWEWelfareActivityModel : MTLModel <MTLJSONSerializing> {
    BOOL _matchDonateNewUser;
    BOOL _matchDonateExpired;
    NSString *_title;
    NSString *_projectDescription;
    NSNumber *_projectID;
    NSString *_projectName;
    NSString *_projectSchemaURL;
    NSString *_organizationShortName;
    NSString *_organizationUserID;
    NSString *_organizationSecUserID;
    NSNumber *_matchDonateMoney;
    NSString *_matchDonateSponsorName;
    NSArray *_matchDonateRange;
    NSString *_matchDonateDeadline;
    NSNumber *_matchDonateUsedMoney;
    NSNumber *_matchDonateUserCount;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *projectDescription;
@property (retain, nonatomic) NSNumber *projectID;
@property (copy, nonatomic) NSString *projectName;
@property (copy, nonatomic) NSString *projectSchemaURL;
@property (copy, nonatomic) NSString *organizationShortName;
@property (copy, nonatomic) NSString *organizationUserID;
@property (copy, nonatomic) NSString *organizationSecUserID;
@property (retain, nonatomic) NSNumber *matchDonateMoney;
@property (copy, nonatomic) NSString *matchDonateSponsorName;
@property (copy, nonatomic) NSArray *matchDonateRange;
@property (copy, nonatomic) NSString *matchDonateDeadline;
@property (retain, nonatomic) NSNumber *matchDonateUsedMoney;
@property (retain, nonatomic) NSNumber *matchDonateUserCount;
@property (nonatomic, getter=isMatchDonateNewUser) BOOL matchDonateNewUser;
@property (nonatomic) BOOL matchDonateExpired;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setProjectID:(id)arg0;
- (id)projectDescription;
- (void)setProjectDescription:(id)arg0;
- (void)setProjectName:(id)arg0;
- (id)projectSchemaURL;
- (void)setProjectSchemaURL:(id)arg0;
- (id)organizationShortName;
- (void)setOrganizationShortName:(id)arg0;
- (id)organizationUserID;
- (void)setOrganizationUserID:(id)arg0;
- (id)organizationSecUserID;
- (void)setOrganizationSecUserID:(id)arg0;
- (id)matchDonateMoney;
- (void)setMatchDonateMoney:(id)arg0;
- (id)matchDonateSponsorName;
- (void)setMatchDonateSponsorName:(id)arg0;
- (id)matchDonateRange;
- (void)setMatchDonateRange:(id)arg0;
- (id)matchDonateDeadline;
- (void)setMatchDonateDeadline:(id)arg0;
- (id)matchDonateUsedMoney;
- (void)setMatchDonateUsedMoney:(id)arg0;
- (id)matchDonateUserCount;
- (void)setMatchDonateUserCount:(id)arg0;
- (BOOL)isMatchDonateNewUser;
- (void)setMatchDonateNewUser:(BOOL)arg0;
- (BOOL)matchDonateExpired;
- (void)setMatchDonateExpired:(BOOL)arg0;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:(id)arg0;
- (id)projectName;
- (id)projectID;

@end
