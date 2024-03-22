//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDetailCommerceSponsorProfileModel : AWEDetailCommonDiffableModel <IGListDiffable, AWEDetailRoutable> {
    NSString *_sponsorName;
    NSString *_sponsorID;
    NSString *_secSponserID;
}

@property (copy, nonatomic) NSString *sponsorName;
@property (copy, nonatomic) NSString *sponsorID;
@property (copy, nonatomic) NSString *secSponserID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sponsorName;
- (void)setSponsorName:(id)arg0;
- (id)routeURLString;
- (id)secSponserID;
- (void)setSecSponserID:(id)arg0;
- (void).cxx_destruct;
- (id)sponsorID;
- (void)setSponsorID:(id)arg0;

@end