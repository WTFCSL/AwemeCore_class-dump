//
//     Generated by private class-dump
//

@class NSString, UIImage, NSURL;

@interface IESLiveLongPressMenuItem : NSObject {
    NSString *_itemTitle;
    UIImage *_itemImage;
    NSURL *_itemImageURL;
    id /* block */ _menuItemAction;
}

@property (copy, nonatomic) NSString *itemTitle;
@property (retain, nonatomic) UIImage *itemImage;
@property (retain, nonatomic) NSURL *itemImageURL;
@property (copy, nonatomic) id /* block */ menuItemAction;

+ (id)itemWithTitle:(id)arg0 image:(id)arg1 handler:(id /* block */)arg2;
+ (id)itemWithTitle:(id)arg0 imageURL:(id)arg1 handler:(id /* block */)arg2;

- (void)setMenuItemAction:(id /* block */)arg0;
- (id /* block */)menuItemAction;
- (void).cxx_destruct;
- (void)performAction;
- (id)itemTitle;
- (void)setItemTitle:(id)arg0;
- (id)itemImage;
- (void)setItemImage:(id)arg0;
- (id)itemImageURL;
- (void)setItemImageURL:(id)arg0;

@end
