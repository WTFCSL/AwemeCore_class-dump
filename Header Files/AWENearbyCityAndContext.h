//
//     Generated by private class-dump
//

@class NSDictionary, AWECityModel;

@interface AWENearbyCityAndContext : NSObject {
    BOOL _isLocated;
    AWECityModel *_city;
    NSDictionary *_context;
}

@property (retain, nonatomic) AWECityModel *city;
@property (nonatomic) BOOL isLocated;
@property (retain, nonatomic) NSDictionary *context;

- (BOOL)isLocated;
- (void)setIsLocated:(BOOL)arg0;
- (id)initWithCity:(id)arg0 isLocated:(BOOL)arg1 context:(id)arg2;
- (id)city;
- (void).cxx_destruct;
- (void)setCity:(id)arg0;
- (void)setContext:(id)arg0;
- (id)context;

@end
