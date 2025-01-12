//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface BDTuringTwiceVerifyModel : BDTuringVerifyModel <BDTuringVerifyModelCreator, BDTuringParameterModel> {
    NSDictionary *_params;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDictionary *params;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelWithParameter:(id)arg0;
+ (BOOL)canHandleParameter:(id)arg0;

- (id)init;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:(id)arg0;

@end
