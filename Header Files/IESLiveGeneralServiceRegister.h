//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface IESLiveGeneralServiceRegister : NSObject {
    NSMutableArray *_serviceClasses;
}

@property (retain, nonatomic) NSMutableArray *serviceClasses;

+ (id)register;

- (id)serviceClasses;
- (void)setServiceClasses:(id)arg0;
- (void)loadActionRegistry;
- (id)init;
- (void).cxx_destruct;
- (id)registerClasses;

@end
