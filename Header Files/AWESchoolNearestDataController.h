//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWESchoolNearestDataController : NSObject <AWESchoolNearestDataControllerProtocol> {
    NSArray *_schoolsList;
}

@property (copy, nonatomic) NSArray *schoolsList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestNearSchoolWithPermission:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)setSchoolsList:(id)arg0;
- (id)schoolsList;
- (void).cxx_destruct;

@end