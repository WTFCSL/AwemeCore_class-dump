//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@interface AWESplashBiddingTopviewStyleModel : MTLModel <MTLJSONSerializing> {
    unsigned long long _styleType;
    NSDictionary *_slideClickInfo;
    NSDictionary *_slideOnlyInfo;
}

@property (nonatomic) unsigned long long styleType;
@property (copy, nonatomic) NSDictionary *slideClickInfo;
@property (copy, nonatomic) NSDictionary *slideOnlyInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setStyleType:(unsigned long long)arg0;
- (id)slideClickInfo;
- (id)slideOnlyInfo;
- (void)setSlideClickInfo:(id)arg0;
- (void)setSlideOnlyInfo:(id)arg0;
- (unsigned long long)styleType;
- (void).cxx_destruct;

@end
