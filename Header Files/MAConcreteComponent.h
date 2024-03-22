//
//     Generated by private class-dump
//

@class NSString;

@interface MAConcreteComponent : NSObject <AMapComponent> {
    NSString *_name;
    NSString *_product;
    NSString *_version;
    NSString *_userAgent;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *product;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSString *userAgent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)userAgent;
- (id)init;
- (void)setUserAgent:(id)arg0;
- (void)setVersion:(id)arg0;
- (void).cxx_destruct;
- (id)version;
- (void)setName:(id)arg0;
- (id)name;
- (id)product;
- (void)setProduct:(id)arg0;

@end