//
//     Generated by private class-dump
//

@class AWENearbyResourceOfCommonData, NSString;

@interface AWENearbyResourceOfPendantModel : MTLModel <MTLJSONSerializing> {
    AWENearbyResourceOfCommonData *_commonData;
}

@property (retain, nonatomic) AWENearbyResourceOfCommonData *commonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setCommonData:(id)arg0;
- (id)commonData;
- (void).cxx_destruct;

@end
