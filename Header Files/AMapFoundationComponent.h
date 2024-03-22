//
//     Generated by private class-dump
//

@class NSString;

@interface AMapFoundationComponent : NSObject <AMapComponent, AMapComponentAnalyzable, AMapComponentServiceProvider>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *product;
@property (readonly, nonatomic) NSString *version;
@property (readonly, nonatomic) NSString *userAgent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)crashfilterArray;
- (id)userAgent;
- (id)version;
- (id)name;
- (id)product;

@end
