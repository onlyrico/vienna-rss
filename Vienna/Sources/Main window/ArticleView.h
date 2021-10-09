//
//  ArticleView.h
//  Vienna
//
//  Created by Steve on Tue Jul 05 2005.
//  Copyright (c) 2004-2005 Steve Palmer. All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

@import Cocoa;

#import "TabbedWebView.h"

@class Article;

@protocol ArticleContentView;
@protocol ArticleViewDelegate;
@protocol Tab;

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Weverything"
@interface ArticleView: TabbedWebView <ArticleContentView, Tab>
#pragma clang diagnostic pop

// Public functions
-(void)setArticles:(nonnull NSArray<Article *> *)articles;
-(void)keyDown:(nonnull NSEvent *)theEvent;
- (void)decreaseTextSize;
- (void)increaseTextSize;

@property (nonnull, strong, nonatomic) id<ArticleViewDelegate> listView;

@end
