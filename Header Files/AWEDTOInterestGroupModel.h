//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDTOInterestGroupModel : MTLModel <MTLJSONSerializing> {
    NSString *_interestGroupId;
    NSString *_interestGroupName;
}

@property (copy, nonatomic) NSString *interestGroupId;
@property (copy, nonatomic) NSString *interestGroupName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)interestGroupId;
- (void)setInterestGroupId:(id)arg0;
- (id)interestGroupName;
- (void)setInterestGroupName:(id)arg0;
- (void).cxx_destruct;

@end
