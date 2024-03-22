//
//     Generated by private class-dump
//

@class NSString;

@interface IESECYataBaseViewModel : NSObject <YataSectionViewModel> {
    Class _sectionClass;
}

@property (retain, nonatomic) Class sectionClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sectionModelWithClass:(Class)arg0;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)arg0;
- (void)listAdapter:(id)arg0 willDisplaySectionController:(id)arg1;
- (void)listAdapter:(id)arg0 didEndDisplayingSectionController:(id)arg1;
- (void)listAdapter:(id)arg0 willDisplaySectionController:(id)arg1 cell:(id)arg2 atIndex:(long long)arg3;
- (void)listAdapter:(id)arg0 didEndDisplayingSectionController:(id)arg1 cell:(id)arg2 atIndex:(long long)arg3;
- (void).cxx_destruct;
- (Class)sectionClass;
- (void)setSectionClass:(Class)arg0;

@end