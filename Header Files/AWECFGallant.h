//
//     Generated by private class-dump
//

@class NSURL, NSString;

@interface AWECFGallant : NSObject {
    NSString *_scheme;
    NSString *_product;
    NSString *_business;
    NSString *_action;
    NSString *_parameters;
    NSURL *_nsurl;
}

@property (retain, nonatomic) NSURL *nsurl;
@property (readonly, copy) NSString *scheme;
@property (readonly, copy) NSString *product;
@property (readonly, copy) NSString *business;
@property (readonly, copy) NSString *action;
@property (readonly, copy) NSString *parameters;

+ (id)DYCURLWithNSURL:(id)arg0;
+ (id)startDYCURL;
+ (id)closeDYCURL;
+ (id)fetchDYCURL;
+ (id)DYCURLWithProduct:(id)arg0 business:(id)arg1 action:(id)arg2 parameters:(id)arg3;
+ (id)scheme;
+ (BOOL)canHandleURL:(id)arg0;

- (void)setNsurl:(id)arg0;
- (id)nsurl;
- (BOOL)canHandle;
- (BOOL)isStartScheme;
- (BOOL)isCloseScheme;
- (BOOL)isFetchScheme;
- (id)toNSURL;
- (id)initWithScheme:(id)arg0 product:(id)arg1 business:(id)arg2 action:(id)arg3 parameters:(id)arg4;
- (id)initWithProduct:(id)arg0 business:(id)arg1 action:(id)arg2 parameters:(id)arg3;
- (void).cxx_destruct;
- (id)scheme;
- (id)action;
- (id)parameters;
- (id)business;
- (id)product;
- (id)initWithNSURL:(id)arg0;

@end
