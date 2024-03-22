//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEPassportAntiSpamDelegate;

@interface AWEPassportAntiSpamManager : NSObject <AWEPassportAntiSpamDelegate> {
    id<AWEPassportAntiSpamDelegate> _implementation;
}

@property (retain, nonatomic) id<AWEPassportAntiSpamDelegate> implementation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)processMiddleCheckWithURL:(id)arg0 originalParams:(id)arg1 error:(id)arg2 rawData:(id)arg3 completion:(id /* block */)arg4;
- (void)setupWithImplementation:(id)arg0;
- (id)implementation;
- (void)setImplementation:(id)arg0;
- (void).cxx_destruct;

@end