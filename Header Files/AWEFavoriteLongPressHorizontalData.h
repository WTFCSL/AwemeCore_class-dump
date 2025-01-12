//
//     Generated by private class-dump
//

@class NSString, NSDictionary, AWEAwemeModel, NSMutableArray;

@interface AWEFavoriteLongPressHorizontalData : AWEFavoriteLongPressData <AWEInteractionElementPopoverDataProtocol> {
    NSMutableArray *_labelArray;
}

@property (retain, nonatomic) NSMutableArray *labelArray;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) NSDictionary *contextDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)elementContentView;
- (void)configContentView:(id)arg0 atIndex:(long long)arg1;
- (void)eventOccurAtIndex:(long long)arg0 target:(id)arg1 sourceView:(id)arg2 containerView:(id)arg3 eventType:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (void)configContentCustomView:(id)arg0 atIndex:(long long)arg1;
- (id)elementCustomContentView;
- (double)dataItemSpace;
- (struct CGSize { double x0; double x1; })dataItemSize;
- (void)setLabelArray:(id)arg0;
- (void)showSnackBarIfNeeded;
- (void)configSingleDataWithContentView:(id)arg0 atIndex:(long long)arg1;
- (void)configMultiDataWithContentView:(id)arg0 atIndex:(long long)arg1;
- (void).cxx_destruct;
- (id)labelArray;

@end
