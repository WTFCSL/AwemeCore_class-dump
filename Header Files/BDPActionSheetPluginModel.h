//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface BDPActionSheetPluginModel : BDPBasePluginModel {
    NSArray *_itemList;
    NSString *_itemColor;
    NSString *_alertText;
}

@property (retain, nonatomic) NSArray *itemList;
@property (copy, nonatomic) NSString *itemColor;
@property (copy, nonatomic) NSString *alertText;

- (BOOL)modelCustomTransformFromDictionary:(id)arg0;
- (void)setItemColor:(id)arg0;
- (void)setAlertText:(id)arg0;
- (void).cxx_destruct;
- (id)itemList;
- (void)setItemList:(id)arg0;
- (id)itemColor;
- (id)alertText;

@end
