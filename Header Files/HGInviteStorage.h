//
//     Generated by private class-dump
//

@interface HGInviteStorage : NSObject

+ (id)defaultStorage;

- (id)keyWithSource:(id)arg0;
- (BOOL)isValidCache:(id)arg0;
- (id)parseResponseJSON:(id)arg0;
- (void)obtainAppListWithSource:(id)arg0 callback:(id /* block */)arg1;

@end
