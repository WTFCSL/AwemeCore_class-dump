//
//     Generated by private class-dump
//

@protocol AWEMemoriesPlayerGridViewControllerProtocol <NSObject>

- (id)initWithDataController:(id)arg0 currentIndex:(unsigned long long)arg1 isSelected:(BOOL)arg2 schemaData:(id)arg3 aggregateConfig:(id)arg4 clickAction:(id /* block */)arg5 publishAction:(id /* block */)arg6 shootAction:(id /* block */)arg7;
- (void)scrollTargetCellToCenterWithIndex:(long long)arg0;
- (id)fetchTargetCellWithIndex:(long long)arg0;
- (void)setTargetCellHidden:(BOOL)arg0 withIndex:(long long)arg1;
- (void)isLoading:(BOOL)arg0;
- (void)dismissHandler:(id /* block */)arg0;

@end
