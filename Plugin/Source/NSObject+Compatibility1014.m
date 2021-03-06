// Copyright (C) 2019 Mailbutler GmbH
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
//  NSObject+Compatibility1014.m
//  Mailbutler
//
//  Created by Fabian Jäger on 06.06.17.
//  Copyright © 2017 Mailbutler. All rights reserved.
//

// WARP addition
// 10.14 class dumps seem to work for 10.15 too, thus changing to isMojaveOrLater()

#define NotAvailable()  NSAssert(false, @"This method does not exist in macOS 10.14!")

#import <Cocoa/Cocoa.h>

#import "CompatibilityHelper.h"

#import "../External/Class-Dumps/macosx10.14/MailCore-Framework/MCAttachment.h"
#import "../External/Class-Dumps/macosx10.14/CNAvatarViewController.h"

@implementation ComposeViewController_CLCompatibility1014 : NSObject

- (NSWindow*)window { return [[(NSViewController*)self view] window]; }

+ (void)load { if(isMojaveOrLater()) CLAddAsCategoryToClass(@class(ComposeViewController)); }

@end

@implementation MCAttachment_CLCompatibility1014 : NSObject

- (id)fileWrapperForAccessLevel:(long long)arg1 { return [(MCAttachment*)self fileWrapperForAccessLevel:arg1 error:nil]; }

+ (void)load { if(isMojaveOrLater()) CLAddAsCategoryToClass(@class(MCAttachment)); }

@end

@implementation HeadersEditor_CLCompatibility1014 : NSObject

- (void)updateDeliveryAccountControl:(id)arg1 { NotAvailable(); }

+ (void)load { if(isMojaveOrLater()) CLAddAsCategoryToClass(@class(HeadersEditor)); }

@end
