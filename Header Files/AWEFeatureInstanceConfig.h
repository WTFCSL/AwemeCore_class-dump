//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEFeatureInstanceConfig : NSObject {
    NSString *_identifier;
    Class _featureClass;
    id _instance;
    NSArray *_injectionInfos;
}

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) Class featureClass;
@property (retain, nonatomic) id instance;
@property (copy, nonatomic) NSArray *injectionInfos;

- (void)setFeatureClass:(Class)arg0;
- (id)injectionInfos;
- (Class)featureClass;
- (void)setInjectionInfos:(id)arg0;
- (void).cxx_destruct;
- (id)instance;
- (id)identifier;
- (void)setInstance:(id)arg0;
- (void)setIdentifier:(id)arg0;

@end
