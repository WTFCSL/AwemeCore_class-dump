//
//     Generated by private class-dump
//

@class NSDictionary, NSArray;

@protocol AWEPostPageMatchMissionService <AWEPostPageBaseService>

@property (nonatomic) BOOL isVisible;
@property (readonly, copy, nonatomic) NSDictionary *itemLoadInfo;
@property (copy, nonatomic) NSArray *sortDescriptor;

- (id)itemLoadInfo;
- (void)expectsToAddItem:(id)arg0;
- (void)setIsVisible:(BOOL)arg0;
- (id)sortDescriptor;
- (BOOL)isVisible;
- (void)addItem:(id)arg0 error:(id)arg1;
- (void)setSortDescriptor:(id)arg0;

@end
